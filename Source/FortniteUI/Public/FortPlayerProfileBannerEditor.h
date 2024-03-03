#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "ESaveProfileForBanners.h"
#include "FortPlayerProfileBannerEditor.generated.h"

class UCommonButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPlayerProfileBannerEditor : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESaveProfileForBanners ProfileToSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanCloseBannerEditor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> IconCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> ColorCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName ChosenIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName ChosenIconCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName ChosenColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName ChosenColorCategory;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_CloseEditorButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_EditIcon;
    
public:
    UFortPlayerProfileBannerEditor();
protected:
    UFUNCTION(BlueprintCallable)
    void SetBannerIcon(const FName Icon);
    
    UFUNCTION(BlueprintCallable)
    void SetBannerColor(const FName Color);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RefreshBannerEditor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowPreviousCategory();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowNextCategory();
    
    UFUNCTION(BlueprintCallable)
    void HandleEditorDeactivated();
    
    UFUNCTION(BlueprintCallable)
    void HandleEditorActivated();
    
    UFUNCTION(BlueprintCallable)
    void CommitChosenIconAndColor();
    
};

