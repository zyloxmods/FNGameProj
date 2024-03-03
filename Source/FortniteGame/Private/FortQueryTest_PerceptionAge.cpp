#include "FortQueryTest_PerceptionAge.h"
#include "Perception/AISense_Sight.h"

UFortQueryTest_PerceptionAge::UFortQueryTest_PerceptionAge() {
    this->Sense = ECorePerceptionTypes::Sight;
    this->SenseClass = UAISense_Sight::StaticClass();
}

