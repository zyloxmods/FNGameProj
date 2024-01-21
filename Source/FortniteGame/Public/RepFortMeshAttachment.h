#pragma once
#include "CoreMinimal.h"
#include "RepFortMeshAttachment.generated.h"

class UAnimBlueprint;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FRepFortMeshAttachment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimBlueprint* AnimBP;
    
    FRepFortMeshAttachment();
};

