#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "AthenaBroadcastPlayerLocationWidget.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaBroadcastPlayerLocationWidget : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* PlayerLocationText;
    
public:
    UAthenaBroadcastPlayerLocationWidget();
private:
    UFUNCTION()
    void OnRemoteClientPoiTagIDChanged(int16 RemoteClientPoiTagID);
    
};

