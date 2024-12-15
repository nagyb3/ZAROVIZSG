#include <iostream>
#include <fstream>

class FileHandler {
public:
    FileHandler(std::string fileName)
        : m_fileName(fileName) 
    {
        m_fileStream.open(fileName);
        if (!m_fileStream.is_open()) {
            throw std::runtime_error("Error opening file");
        }
    }

    ~FileHandler() {
        if (m_fileStream.is_open()) {
            m_fileStream.close();
        }
    }

private:
    std::string m_fileName;
    std::fstream m_fileStream;
};

int main() {
    try {
        FileHandler fileHandler("example.txt");
        // kód, amely az example.txt fájlt használja
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
