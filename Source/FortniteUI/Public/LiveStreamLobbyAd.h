#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LiveStreamLobbyAd.generated.h"

class UCommonTextBlock;
class UPanelWidget;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class ULiveStreamLobbyAd : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* ContentSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* ButtonLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* CountdownLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* CountdownText;
    
public:
    ULiveStreamLobbyAd();
};

