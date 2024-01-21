#pragma once
#include "CoreMinimal.h"
#include "AthenaQuickChatActiveEntry.generated.h"

class UAthenaQuickChatBank;
class UObject;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FAthenaQuickChatActiveEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAthenaQuickChatBank> Bank;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> ContextObject;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 ContextValue;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 Index;
    
    FAthenaQuickChatActiveEntry();
};

