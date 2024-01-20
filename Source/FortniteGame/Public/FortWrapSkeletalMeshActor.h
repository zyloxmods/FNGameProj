#pragma once
#include "CoreMinimal.h"
#include "Animation/SkeletalMeshActor.h"
#include "EItemWrapMaterialType.h"
#include "McpVariantChannelInfo.h"
#include "FortWrapSkeletalMeshActor.generated.h"

class UAthenaItemWrapDefinition;

UCLASS(Blueprintable)
class AFortWrapSkeletalMeshActor : public ASkeletalMeshActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaItemWrapDefinition* WrapToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemWrapMaterialType WrapMaterialType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMcpVariantChannelInfo> VariantData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasSectionLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialSectionMask;
    
public:
    AFortWrapSkeletalMeshActor();
    UFUNCTION(BlueprintCallable)
    void SetWrap(UAthenaItemWrapDefinition* NewWrap, EItemWrapMaterialType MaterialType);
    
};

