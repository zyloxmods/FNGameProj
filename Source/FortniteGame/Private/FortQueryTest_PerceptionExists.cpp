#include "FortQueryTest_PerceptionExists.h"
#include "Perception/AISense_Sight.h"

UFortQueryTest_PerceptionExists::UFortQueryTest_PerceptionExists() {
    Sense = ECorePerceptionTypes::Sight;
    SenseClass = UAISense_Sight::StaticClass();
}

