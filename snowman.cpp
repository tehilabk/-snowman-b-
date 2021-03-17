#include <iostream>
#include <stdexcept>
#include <string>
#include <array>
#include "snowman.hpp"
using namespace std;

namespace ariel{

const int base_ten = 10;
const int up = 2;
const int options = 4;
const int min = 11111111;
const int max = 44444444;


const array<string, options> Hat = {"\n      \n _===_ \n" , "\n  ___  \n ..... \n ", "\n   _   \n  /_\\ \n", "\n  ___  \n (_*_) \n" };
const array<string, options> Nose = {",", ".", "_", " "};
const array<string, options> Left_eye = {"(.", "(o", "(O", "(-"};
const array<string, options> Right_eye = {".)", "o)", "O)", "-)"};
const array<string, options> Left_arm = {"<","\\", "/", " "};
const array<string, options> Right_arm = {">\n", "/\n", "\\\n", " \n"};
const array<string, options> Torso = {"( : )", "(] [)","(> <)", "(   )"};
const array<string, options> Base = {" ( : ) "," (\" \") ", " (___) ", " (   ) "};



  string snowman(int input){

        int num = input;
        string snowman;
        
        if ((input<min) || (input>max)) {
            throw invalid_argument("Invalid code");
        }


        int base = num % base_ten;
             if ((base < 1) || (base > 4)) {
               throw invalid_argument("Invalid code");
            }
            num /= base_ten; 
        


        int torso = num % base_ten;
             if ((torso < 1) || (torso > 4)) {
               throw invalid_argument("Invalid code");
            }
            num /= base_ten; 
         


        int right_arm = num % base_ten;
             if ((right_arm < 1) || (right_arm > 4)) {
               throw invalid_argument("Invalid code");
            }
            num /= base_ten; 


         int left_arm = num % base_ten;
             if ((left_arm < 1) || (left_arm > 4)) {
               throw invalid_argument("Invalid code");
            }
            num /= base_ten; 



         int right_eye = num % base_ten;
             if ((right_eye < 1) || (right_eye > 4)) {
               throw invalid_argument("Invalid code");
            }
            num /= base_ten; 


         int left_eye = num % base_ten;
             if ((left_eye < 1) || (left_eye > 4)) {
               throw invalid_argument("Invalid code");
            }
            num /= base_ten; 


         int nose = num % base_ten;
             if ((nose < 1) || (nose > 4)) {
               throw invalid_argument("Invalid code");
            }
            num /= base_ten; 


         int hat = num % base_ten;
              if ((hat < 1) || (hat > 4)) {
                throw invalid_argument("Invalid code");
            }

        
        snowman.append(Hat.at(hat-1));

        if (left_arm == up && right_arm == up){
            snowman.append(Left_arm.at(left_arm-1));
            snowman.append(Left_eye.at(left_eye-1));
            snowman.append(Nose.at(nose-1));
            snowman.append(Right_eye.at(right_eye-1));
            snowman.append(Right_arm.at(right_arm-1));

            snowman.append(Left_arm.at(options-1));
            snowman.append(Torso.at(torso-1));
            snowman.append(Right_arm.at(options-1));

            snowman.append(Base.at(base-1));
        }   

        else if (left_arm == up){
             snowman.append(Left_arm.at(left_arm-1));
            snowman.append(Left_eye.at(left_eye-1));
            snowman.append(Nose.at(nose-1));
            snowman.append(Right_eye.at(right_eye-1));
            snowman.append(Right_arm.at(options-1));

            snowman.append(Left_arm.at(options-1));
            snowman.append(Torso.at(torso-1));
            snowman.append(Right_arm.at(right_arm-1));

            snowman.append(Base.at(base-1));
        }

        else if (right_arm == up){
            snowman.append(Left_arm.at(options-1));
            snowman.append(Left_eye.at(left_eye-1));
            snowman.append(Nose.at(nose-1));
            snowman.append(Right_eye.at(right_eye-1));
            snowman.append(Right_arm.at(right_arm-1));

            snowman.append(Left_arm.at(left_arm-1));
            snowman.append(Torso.at(torso-1));
            snowman.append(Right_arm.at(options-1));

            snowman.append(Base.at(base-1));
        }

        else {
            snowman.append(Left_arm.at(options-1));
            snowman.append(Left_eye.at(left_eye-1));
            snowman.append(Nose.at(nose-1));
            snowman.append(Right_eye.at(right_eye-1));
            snowman.append(Right_arm.at(options-1));

            snowman.append(Left_arm.at(left_arm-1));
            snowman.append(Torso.at(torso-1));
            snowman.append(Right_arm.at(right_arm-1));

            snowman.append(Base.at(base-1));
        }  
    return snowman;
  }

}
