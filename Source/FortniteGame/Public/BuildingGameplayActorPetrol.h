#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BuildingGameplayActor.h"
#include "SplatterCellIndex.h"
#include "Templates/SubclassOf.h"
#include "BuildingGameplayActorPetrol.generated.h"

class AActor;
class ABuildingGameplayActorPetrol;
class UDecalComponent;
class UGameplayEffect;
class UMaterialInstanceDynamic;
class USphereComponent;

UCLASS(Blueprintable)
class ABuildingGameplayActorPetrol : public ABuildingGameplayActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereCollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSplatterCellIndex SplatterIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector StartingPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector TargetPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MaterialInstanceDynamic;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDecalComponent* SplatterDecal;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> DamageEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABuildingGameplayActorPetrol*> Neighbors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IgniteRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentSize;
    
private:
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_PrevPetrol, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> PrevPetrol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector ImpactDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Ignited, meta=(AllowPrivateAccess=true))
    bool bIgnited;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ProjectileCount, meta=(AllowPrivateAccess=true))
    int32 ProjectileCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SplatterMinDecalWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SplatterMaxDecalWidth;
    
public:
    ABuildingGameplayActorPetrol();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateCurrentSize();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ProjectileCount(int32 PrevProjectileCount);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PrevPetrol();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Ignited(bool bPrevIgnited);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIgnite();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGrowBigger(const int32 NewProjectileCount);
    
    UFUNCTION(BlueprintCallable)
    void IgniteTimerExpired();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTargetSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetProjectileCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void ClientOnIgnite();
    
};

