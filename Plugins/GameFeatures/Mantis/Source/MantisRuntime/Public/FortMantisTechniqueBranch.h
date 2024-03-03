#pragma once
#include "CoreMinimal.h"
#include "EFortMantisBranchPath.h"
#include "FortMantisTechniqueBranch.generated.h"

USTRUCT(BlueprintType)
struct FFortMantisTechniqueBranch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FromTechnique;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ToTechnique;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortMantisBranchPath BranchPath;
    
    MANTISRUNTIME_API FFortMantisTechniqueBranch();
};

