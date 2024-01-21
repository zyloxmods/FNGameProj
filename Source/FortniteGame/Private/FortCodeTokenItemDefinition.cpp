#include "FortCodeTokenItemDefinition.h"

UFortCodeTokenItemDefinition::UFortCodeTokenItemDefinition() {
    this->AllowedPlatforms.AddDefaulted(2);
    this->ProfileType = EItemProfileType::Common;
}

