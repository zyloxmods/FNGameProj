#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FortMaterialsPriorToOverride.h"
#include "McpVariantChannelInfo.h"
#include "FortItemWrapOverrideComponent.generated.h"

class AActor;
class UAthenaItemWrapDefinition;
class UFortItemWrapOverrideComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortItemWrapOverrideComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SoftOverride, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAthenaItemWrapDefinition> ReplicatedItemWrapOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaItemWrapDefinition* CurrentOverrideHardRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_VariantData, meta=(AllowPrivateAccess=true))
    TArray<FMcpVariantChannelInfo> VariantInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UPrimitiveComponent*, FFortMaterialsPriorToOverride> OriginalMaterials;
    
public:
    UFortItemWrapOverrideComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void RemoveWrapFromOwner();
    
    UFUNCTION(BlueprintCallable)
    static UFortItemWrapOverrideComponent* OverrideWrapOnActor(AActor* ActorBase, const TSoftObjectPtr<UAthenaItemWrapDefinition>& wrap, const TArray<FMcpVariantChannelInfo>& VariantData);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_VariantData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SoftOverride();
    
};

