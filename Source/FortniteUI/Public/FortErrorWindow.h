#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortErrorInfo.h"
#include "Templates/SubclassOf.h"
#include "FortErrorWindow.generated.h"

class UCommonUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class UFortErrorWindow : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonUserWidget> ErrorEntryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCommonUserWidget*> ErrorEntriesPool;
    
public:
    UFortErrorWindow();
    UFUNCTION(BlueprintCallable)
    void PutErrorEntries(UPARAM(Ref) TArray<UCommonUserWidget*>& ErrorEntries);
    
    UFUNCTION(BlueprintCallable)
    UCommonUserWidget* GetErrorEntry();
    
    UFUNCTION(BlueprintCallable)
    void DismissErrors(TArray<FFortErrorInfo> ErrorInfos);
    
};

