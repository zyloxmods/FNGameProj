#include "FortAnimInput_RandomizeMontageSection.h"

FFortAnimInput_RandomizeMontageSection::FFortAnimInput_RandomizeMontageSection() {
    this->CurrentAnimation = NULL;
    this->TimeUntilNextSectionChange = 1;
    this->CurrentSectionParamIndex = 0;
}

