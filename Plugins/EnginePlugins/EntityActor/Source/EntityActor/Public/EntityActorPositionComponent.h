#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EntityPositionComponent.h"
#include "EntityActorPositionComponent.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class ENTITYACTOR_API UEntityActorPositionComponent : public UEntityPositionComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ShadowVar_Location;
    
public:
    UEntityActorPositionComponent();
private:
    UFUNCTION(BlueprintCallable)
    void OnRootComponentChanged(USceneComponent* InRootComponent, bool bIsRootComponent);
    
};

