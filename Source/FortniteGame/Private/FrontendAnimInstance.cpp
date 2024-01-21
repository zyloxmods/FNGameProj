#include "FrontendAnimInstance.h"

void UFrontendAnimInstance::PlaySelected() {
}

void UFrontendAnimInstance::PlayOutro() {
}

void UFrontendAnimInstance::PlayIntro() {
}


UFrontendAnimInstance::UFrontendAnimInstance() {
    this->bIsSkydiving = false;
    this->FortPlayerPawn = NULL;
    this->Gender = EFortDisplayGender::Male;
    this->IntroAnimation_Female = NULL;
    this->IntroAnimation_Male = NULL;
    this->OutroAnimation_Female = NULL;
    this->OutroAnimation_Male = NULL;
    this->SelectedAnimation_Female = NULL;
    this->SelectedAnimation_Male = NULL;
    this->bCanPlayCustomAnimations = false;
}

