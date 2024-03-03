#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "SidekickDisplayWidget.generated.h"

class UCommonTextBlock;
class UImage;
class UMaterial;
class UMediaPlayer;
class UMediaTexture;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USidekickDisplayWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* DisplayMaterial;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_DisplayArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Marker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMediaPlayer* MediaPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMediaTexture* MediaTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_PlayerName;
    
public:
    USidekickDisplayWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVideoPaused(bool bPaused);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVideoDisabled(bool bDisabled);
    
};

