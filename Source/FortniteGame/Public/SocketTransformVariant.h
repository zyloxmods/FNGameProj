#pragma once
#include "CoreMinimal.h"
#include "SocketTransformVariant.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FSocketTransformVariant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SourceSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OverridSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> SourceObjectToModify;
    
    FORTNITEGAME_API FSocketTransformVariant();
};

