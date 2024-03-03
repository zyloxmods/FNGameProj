#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EntityRotationComponent.h"
#include "EntityActorRotationComponent.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class ENTITYACTOR_API UEntityActorRotationComponent : public UEntityRotationComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator ShadowVar_Rotation;
    
public:
    UEntityActorRotationComponent();
private:
    UFUNCTION(BlueprintCallable)
    void OnRootComponentChanged(USceneComponent* InRootComponent, bool bIsRootComponent);
    
};

