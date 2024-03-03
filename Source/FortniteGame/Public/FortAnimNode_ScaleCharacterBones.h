#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/AnimNodeBase.h"
#include "FortAnimNode_ScaleCharacterBones.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortAnimNode_ScaleCharacterBones : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink PreScalePose;
    
    FFortAnimNode_ScaleCharacterBones();
};

