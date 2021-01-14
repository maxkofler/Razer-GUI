#include "settingsloader.h"

SettingsLoader::SettingsLoader()
{

}

int SettingsLoader::getPowerPreset(){
    using namespace std;
    ifstream file;
    system("/usr/bin/razer-cli read power > power.txt");
    file.open("power.txt", ios::in);
    string curLine;
    string pwrString;
    int pos;
    int pwr;
    while (!file.eof()){
        getline(file, curLine);
        pos = curLine.find("pwr: ");
        if (pos >= 0){
            pwr = curLine.at(pos + 5) - '0';
            cout << "current Power preset: " << pwr << endl;
            file.close();
            if (pwr == 4){pwr = 3;}
            return pwr;
        }
    }
    file.close();
    return -1;
}

int SettingsLoader::getCPU(){
    using namespace std;
    ifstream file;
    system("/usr/bin/razer-cli read power > power.txt");
    file.open("power.txt", ios::in);
    string curLine;
    int pos;
    int cpu;
    while (!file.eof()){
        getline(file, curLine);
        pos = curLine.find("cpu: ");
        if (pos >= 0){
            cpu = curLine.at(pos + 5) - '0';
            cout << "current CPU: " << cpu << endl;
            file.close();
            return cpu;
        }
    }
    file.close();
    return -1;
}

int SettingsLoader::getGPU(){
    using namespace std;
    ifstream file;
    system("/usr/bin/razer-cli read power > power.txt");
    file.open("power.txt", ios::in);
    string curLine;
    int pos;
    int gpu;
    while (!file.eof()){
        getline(file, curLine);
        pos = curLine.find("gpu: ");
        if (pos >= 0){
            gpu = curLine.at(pos + 5) - '0';
            cout << "current GPU: " << gpu << endl;
            file.close();
            return gpu;
        }
    }
    file.close();
    return -1;
}


void SettingsLoader::setPower(int preset){
    using namespace std;

    string exec = "/usr/bin/razer-cli write power " + to_string(preset);
    system(exec.c_str());

}

void SettingsLoader::setCustomPower(int CPU, int GPU){
    using namespace std;

    string exec = "/usr/bin/razer-cli write power 4 " + to_string(CPU) + " " + to_string(GPU);
    system(exec.c_str());
}
