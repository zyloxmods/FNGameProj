#pragma once
#include "CoreMinimal.h"
#include "CustomCharacterParts.generated.h"

class UCustomCharacterPart;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FCustomCharacterParts {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 WasReplicatedFlags;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UCustomCharacterPart* Parts[6];
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    bool bReplicationFailed;
    
public:
    FCustomCharacterParts();
};

