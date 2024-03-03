#include "FortItemPreviewWorld.h"
#include "Components/ChildActorComponent.h"

void AFortItemPreviewWorld::SetBackgroundMaterialDynamic(UMaterialInstanceDynamic* InBackgroundMaterialDynamic) {
}





AFortItemPreviewWorld::AFortItemPreviewWorld() {
    this->BackgroundMaterial = NULL;
    this->BackgroundMaterialDynamic = NULL;
    this->SceneBackgroundComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("VaultBackgroundComponent"));
    this->SceneBackground = NULL;
    this->SceneChangerComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("VaultRotatorComponent"));
    this->PreviewSceneChanger = NULL;
}

