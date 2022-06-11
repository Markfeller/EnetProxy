#pragma once
#include <string>

namespace gt {
    extern std::string flag;
    extern bool resolving_uid2;
    extern bool validating_world;
    extern bool connecting;
    extern bool in_game;
    extern bool ghost;
    void send_log(std::string text);
    void solve_captcha(std::string text);
}
