#pragma once
#include "CoreMinimal.h"
#include "TaggedStaticMeshSubstitution.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FTaggedStaticMeshSubstitution {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Substitute;
    
    FORTNITEGAME_API FTaggedStaticMeshSubstitution();
};

