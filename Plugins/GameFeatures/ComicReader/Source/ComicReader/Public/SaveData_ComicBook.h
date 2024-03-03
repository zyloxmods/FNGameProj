#pragma once
#include "CoreMinimal.h"
#include "SaveData.h"
#include "SaveData_ComicBook.generated.h"

UCLASS(Blueprintable)
class USaveData_ComicBook : public USaveData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastPage;
    
public:
    USaveData_ComicBook();
};

