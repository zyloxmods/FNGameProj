#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EntityScaleComponent.h"
#include "EntityActorScaleComponent.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class ENTITYACTOR_API UEntityActorScaleComponent : public UEntityScaleComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ShadowVar_Scale;
    
public:
    UEntityActorScaleComponent();
private:
    UFUNCTION(BlueprintCallable)
    void OnRootComponentChanged(USceneComponent* InRootComponent, bool bIsRootComponent);
    
};

