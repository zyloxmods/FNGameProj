#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BacchusResizableHUDElement.h"
#include "BacchusKillFeed.generated.h"

class UImage;
class USizeBox;

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API UBacchusKillFeed : public UBacchusResizableHUDElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* MainSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UImage> FireImageRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D FireImageAbsoluteOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SizePropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ShowAllTimeTimePropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfActiveLines;
    
public:
    UBacchusKillFeed();
    UFUNCTION(BlueprintCallable)
    void SetActiveNumberOfLines(float numberOfLines);
    
};

