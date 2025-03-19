use std::path::Path;
use std::{io, fs};
use reqwest::get;

fn copy_dir_all(src: impl AsRef<Path>, dst: impl AsRef<Path>) -> io::Result<()> {
    fs::create_dir_all(&dst)?;
    for entry in fs::read_dir(src)? {
        let entry = entry?;
        let ty = entry.file_type()?;
        if ty.is_dir() {
            copy_dir_all(entry.path(), dst.as_ref().join(entry.file_name()))?;
        } else {
            fs::copy(entry.path(), dst.as_ref().join(entry.file_name()))?;
        }
    }
    Ok(())
}

#[tokio::main]
async fn main() -> Result<(), Box<dyn std::error::Error>> {
    println!("Welcom to the UVa quick question setup.");
    println!("Please input the problem number.");

    let mut problem = String::new();

    io::stdin()
        .read_line(&mut problem)
        .expect("Failed to read line");

    let problem = problem.trim();
    
    let pdf_url = format!("https://onlinejudge.org/external/1/{}.pdf", problem);
    let response = get(&pdf_url).await?;
    let body = response.bytes().await?;
    
    let dir_path = format!("/home/brandon/CompetitiveProgramming/p{}", problem);
    fs::create_dir_all(&dir_path)?;

    let file_path = format!("{}/p{}.pdf", dir_path, problem);
    fs::write(file_path, body).expect("Unable to create file");

    println!("PDF downloaded successfully.");

    Ok(())

}
