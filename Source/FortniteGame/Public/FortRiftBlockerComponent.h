#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "FortRiftBlockerComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortRiftBlockerComponent : public UBoxComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bStartActive: 1;
    
public:
    UFortRiftBlockerComponent();
};

