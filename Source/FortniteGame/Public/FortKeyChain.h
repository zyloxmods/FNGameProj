#pragma once
#include "CoreMinimal.h"
#include "FortEncryptionKey.h"
#include "FortKeyChain.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortKeyChain {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Hash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortEncryptionKey> Keys;
    
    FFortKeyChain();
};

