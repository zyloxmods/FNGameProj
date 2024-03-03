#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MatchmakingRegionAndPoolBase.generated.h"

class USizeBox;

UCLASS(Blueprintable, EditInlineNew)
class UMatchmakingRegionAndPoolBase : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* SizeBox_HotfixControlled;
    
public:
    UMatchmakingRegionAndPoolBase();
};

