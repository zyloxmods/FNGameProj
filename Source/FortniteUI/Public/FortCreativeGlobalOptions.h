#pragma once
#include "CoreMinimal.h"
#include "UFortMatchmakingKnobsDataSource.h"
#include "FortActivatablePanel.h"
#include "FortCreativeGlobalOptions.generated.h"

class UCommonButton;
class UCommonTextBlock;
class UFortCreativeOptionsBundle;
class UFortCreativeOptionsCategory;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew, Config=Creative)
class UFortCreativeGlobalOptions : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CachedLastUsedIndexInCategory;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortCreativeOptionsBundle* OptionsAsset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCreativeOptionsCategory* Category_Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCreativeOptionsCategory* Category_MoveTool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Accept;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Cancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ToolTipText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_DisplayImage;
    
public:
    UFortCreativeGlobalOptions();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateCachedIndices();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetListDataSource(TEnumAsByte<UFortMatchmakingKnobsDataSource::Type> ListType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortCreativeOptionsCategory* GetOptionListFromMemoryPointer() const;
    
};

