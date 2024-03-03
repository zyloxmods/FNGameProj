#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FortHexMapMarkerBase.generated.h"

class UAnimationAsset;
class UMaterialInstanceDynamic;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class AFortHexMapMarkerBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> CurrentMIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* IdleAnimation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkelMeshComponent;
    
public:
    AFortHexMapMarkerBase();
};

