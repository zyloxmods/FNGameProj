#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RepFortMeshAttachment.generated.h"

class UAnimInstance;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct FRepFortMeshAttachment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> AnimBP;
    
    FORTNITEGAME_API FRepFortMeshAttachment();
};

