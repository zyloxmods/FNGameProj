#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FortWeaponRanged.h"
#include "FortWeap_WannaGun.generated.h"

class UBuildingTextureData;

UCLASS(Blueprintable)
class AFortWeap_WannaGun : public AFortWeaponRanged {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector LastHitActorScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FRotator LastHitActorRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LastHitActorClass, meta=(AllowPrivateAccess=true))
    UClass* LastHitActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBuildingTextureData> TransparentTextureData;
    
public:
    AFortWeap_WannaGun();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_LastHitActorClass();
    
};

