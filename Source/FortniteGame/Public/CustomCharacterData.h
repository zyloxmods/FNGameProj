#pragma once
#include "CoreMinimal.h"
#include "CustomCharacterData.generated.h"

class UAthenaCharmItemDefinition;
class UCustomCharacterPart;

USTRUCT(BlueprintType)
struct FCustomCharacterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 WasPartReplicatedFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredVariantPartFlags;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UCustomCharacterPart* Parts[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaCharmItemDefinition* Charms[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCustomCharacterPart*> VariantRequiredCharacterParts;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    bool bReplicationFailed;
    
public:
    FORTNITEGAME_API FCustomCharacterData();
};

