#include "FortQueryTest_PerceptionAge.h"
#include "Perception/AISense_Sight.h"

UFortQueryTest_PerceptionAge::UFortQueryTest_PerceptionAge() {
    Sense = ECorePerceptionTypes::Sight;
    SenseClass = UAISense_Sight::StaticClass();
}

