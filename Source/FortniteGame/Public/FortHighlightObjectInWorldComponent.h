#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HighlightObjectData.h"
#include "FortHighlightObjectInWorldComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortHighlightObjectInWorldComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHighlightObjectData> HighlightData;
    
public:
    UFortHighlightObjectInWorldComponent();
};

