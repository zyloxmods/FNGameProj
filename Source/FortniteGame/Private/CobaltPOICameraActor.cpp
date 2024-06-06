#include "CobaltPOICameraActor.h"
#include "Components/SceneComponent.h"

ACobaltPOICameraActor::ACobaltPOICameraActor() {
    TranslationSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("TranslationSceneComponent"));
}

