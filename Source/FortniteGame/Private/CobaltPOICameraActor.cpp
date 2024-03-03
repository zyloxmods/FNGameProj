#include "CobaltPOICameraActor.h"
#include "Components/SceneComponent.h"

ACobaltPOICameraActor::ACobaltPOICameraActor() {
    this->TranslationSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("TranslationSceneComponent"));
}

