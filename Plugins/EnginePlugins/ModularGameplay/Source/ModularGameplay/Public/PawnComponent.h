#pragma once
#include "CoreMinimal.h"
#include "GameFrameworkComponent.h"
#include "PawnComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, Within=Pawn, meta=(BlueprintSpawnableComponent))
class MODULARGAMEPLAY_API UPawnComponent : public UGameFrameworkComponent {
    GENERATED_BODY()
public:
    UPawnComponent();
};

