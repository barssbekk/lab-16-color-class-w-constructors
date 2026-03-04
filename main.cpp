// COMSC-210 | Lab 16 | Barsbek
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class Color {
private:
    int m_red{};
    int m_green{};
    int m_blue{};
public:
    // Default Constructor
    Color() { m_red = 0; m_green = 0; m_blue = 0; }
    // Parameter Constructor
    Color(const int userR, const int userG, const int userB) {
        m_red = userR;
        m_green = userG;
        m_blue = userB;
    }
    // ADD: "Partial" constructor

    // Getter
    int getRed() const { return m_red; }
    int getGreen() const { return m_green; }
    int getBlue() const { return m_blue; }
    // Setter
    void setRed(const int red) { m_red = red; }
    void setGreen(const int green) { m_green = green; }
    void setBlue(const int blue) { m_blue = blue; }

    // print() outputs the RGB values
    void print() const {
        static int s_counter{1};
        cout << "Color #" << s_counter << '\n';
        cout << "\tRed: " << m_red << '\n'
             << "\tGreen: " << m_green << '\n'
             << "\tBlue: " << m_blue << '\n';
        ++s_counter;
    }
};

int main() {
    // vector<Color> vecColor{};
    Color test{2, 2, 8,};
    cout << test.getRed() << '\n'
         << test.getBlue() << '\n'
         << test.getGreen() << '\n';

    // Check if file opens
    // ifstream fileInput{"data.txt"};
    // if (!fileInput) {
    //     cerr << "File not found\n";
    //     return 1;
    // }

    // int inputRed{};
    // int inputGreen{};
    // int inputBlue{};

    // Populate with data
    // while (fileInput >> inputRed >> inputGreen >> inputBlue) {
    //     Color temp{};
    //     temp.setRed(inputRed);
    //     temp.setBlue(inputBlue);
    //     temp.setGreen(inputGreen);
    //     vecColor.push_back(temp);
    // }

    // Output a vector
    // for (const auto& colors : vecColor) {
    //     colors.print();
    // }

    return 0;
}