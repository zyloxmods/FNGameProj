#pragma once
#include "CoreMinimal.h"
#include "PlayerStateEncryptionKey.generated.h"

USTRUCT(BlueprintType)
struct FPlayerStateEncryptionKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Key;
    
    FORTNITEGAME_API FPlayerStateEncryptionKey();
};

