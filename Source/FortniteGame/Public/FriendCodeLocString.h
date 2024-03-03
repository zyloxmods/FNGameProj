#pragma once
#include "CoreMinimal.h"
#include "FriendCodeLocString.generated.h"

USTRUCT(BlueprintType)
struct FFriendCodeLocString {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Lang;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Text;
    
    FORTNITEGAME_API FFriendCodeLocString();
};

