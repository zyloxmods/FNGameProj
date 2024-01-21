#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortDisplayAttribute.h"
#include "Templates/SubclassOf.h"
#include "FortAttributeList_NUI.generated.h"

class UFortAttributeListItem_NUI;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortAttributeList_NUI : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAttributeListItem_NUI> AttributeItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHoverEnabledOnElements;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFortAttributeListItem_NUI*> ShownAttributeWidgets;
    
public:
    UFortAttributeList_NUI();
    UFUNCTION(BlueprintCallable)
    void SetPreviewData(const TArray<FFortDisplayAttribute>& Data);
    
    UFUNCTION(BlueprintCallable)
    void SetData(const TArray<FFortDisplayAttribute>& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRemoveShownAttributeListItem(UFortAttributeListItem_NUI* AttributeListItemWidget, int32 AtIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClearShownAttributes();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAddShownAttributeListItem(UFortAttributeListItem_NUI* AttributeListItemWidget);
    
    UFUNCTION(BlueprintCallable)
    void ClearPreviewData();
    
};

