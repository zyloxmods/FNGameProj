#pragma once
#include "CoreMinimal.h"
#include "Animation/SkeletalMeshActor.h"
#include "EItemWrapMaterialType.h"
#include "McpVariantChannelInfo.h"
#include "FortWrapSkeletalMeshActor.generated.h"

class ACustomItemWrapModifier;
class UAthenaItemWrapDefinition;

UCLASS(Blueprintable)
class AFortWrapSkeletalMeshActor : public ASkeletalMeshActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnWrapApplied);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaItemWrapDefinition* WrapToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemWrapMaterialType WrapMaterialType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMcpVariantChannelInfo> VariantData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACustomItemWrapModifier* ItemWrapModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasSectionLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialSectionMask;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWrapApplied OnWrapApplied;
    
public:
    AFortWrapSkeletalMeshActor();
    UFUNCTION(BlueprintCallable)
    void SetWrap(UAthenaItemWrapDefinition* NewWrap, EItemWrapMaterialType MaterialType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    ACustomItemWrapModifier* GetWrapModifier() const;
    
};

