#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "BulletWhipTrackerData.h"
#include "BulletWhipTrackerComponentBase.generated.h"

class USceneComponent;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBulletWhipTrackerComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBulletWhipTrackerData> WhipTrackerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableGravityCheck: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* CachedPassByPawn;
    
public:
    UBulletWhipTrackerComponentBase();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UpdateVelocity(FVector CurrentVelocity);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Reset(FVector StartLocationIn);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Disable();
    
};

