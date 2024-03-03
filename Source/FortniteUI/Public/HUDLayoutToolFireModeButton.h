#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EFireModeType.h"
#include "HUDLayoutToolFireModeButton.generated.h"

class UCommonButton;
class UFortMovieWidget;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UHUDLayoutToolFireModeButton : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFireModeType FireModeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FireModeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FireModeDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* FireModeImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* SelectionButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMovieWidget* MovieWidget;
    
public:
    UHUDLayoutToolFireModeButton();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectFireMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeselected();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFireModeType GetFireModeType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetFireModeDescription() const;
    
};

