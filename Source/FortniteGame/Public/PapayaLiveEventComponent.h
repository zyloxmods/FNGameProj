#pragma once
#include "CoreMinimal.h"
#include "FortPlayspaceComponent.h"
#include "PapayaLiveEventComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UPapayaLiveEventComponent : public UFortPlayspaceComponent {
    GENERATED_BODY()
public:
    UPapayaLiveEventComponent();
};

