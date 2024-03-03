#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "AthenaBroadcastSessionId.generated.h"

class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaBroadcastSessionId : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_SessionId;
    
public:
    UAthenaBroadcastSessionId();
};

