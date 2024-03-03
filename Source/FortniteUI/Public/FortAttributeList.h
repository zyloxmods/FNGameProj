#pragma once
#include "CoreMinimal.h"
#include "FortDisplayAttribute.h"
#include "FortUserWidget.h"
#include "Templates/SubclassOf.h"
#include "FortAttributeList.generated.h"

class UFortAttributeListItem;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortAttributeList : public UFortUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAttributeListItem> AttributeItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHoverEnabledOnElements;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* AttributeContainer;
    
public:
    UFortAttributeList();
    UFUNCTION(BlueprintCallable)
    void SetPreviewData(const TArray<FFortDisplayAttribute>& Data);
    
    UFUNCTION(BlueprintCallable)
    TArray<FFortDisplayAttribute> SetData(const TArray<FFortDisplayAttribute>& Data);
    
    UFUNCTION(BlueprintCallable)
    void ClearPreviewData();
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
};

